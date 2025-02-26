/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/

#include "data/data_premium_limits.h"
#include "main/main_app_config.h"
#include "main/main_session.h"

namespace Data {

PremiumLimits::PremiumLimits(not_null<Main::Session*> session)
: _session(session) {
}

// 🚀 FORZAR TELEGRAM PREMIUM SIEMPRE ACTIVADO 🚀
bool PremiumLimits::isPremium() const {
    return true; // SIEMPRE PREMIUM
}

// 🚀 AUMENTAR LOS LÍMITES PREMIUM 🚀
int PremiumLimits::channelsDefault() const {
    return 500;
}
int PremiumLimits::channelsPremium() const {
    return 5000; // Aumento de canales permitidos
}
int PremiumLimits::channelsCurrent() const {
    return channelsPremium();
}

int PremiumLimits::similarChannelsDefault() const {
    return 10;
}
int PremiumLimits::similarChannelsPremium() const {
    return 500;
}
int PremiumLimits::similarChannelsCurrent() const {
    return similarChannelsPremium();
}

int PremiumLimits::gifsDefault() const {
    return 200;
}
int PremiumLimits::gifsPremium() const {
    return 5000; // Más GIFs permitidos
}
int PremiumLimits::gifsCurrent() const {
    return gifsPremium();
}

int PremiumLimits::stickersFavedDefault() const {
    return 5;
}
int PremiumLimits::stickersFavedPremium() const {
    return 500; // Más stickers favoritos
}
int PremiumLimits::stickersFavedCurrent() const {
    return stickersFavedPremium();
}

int PremiumLimits::dialogsPinnedDefault() const {
    return 5;
}
int PremiumLimits::dialogsPinnedPremium() const {
    return 100; // Más chats anclados
}
int PremiumLimits::dialogsPinnedCurrent() const {
    return dialogsPinnedPremium();
}

int PremiumLimits::uploadMaxDefault() const {
    return 4000;
}
int PremiumLimits::uploadMaxPremium() const {
    return 16000; // Más límite de subida
}
int PremiumLimits::uploadMaxCurrent() const {
    return uploadMaxPremium();
}

int PremiumLimits::aboutLengthDefault() const {
    return 70;
}
int PremiumLimits::aboutLengthPremium() const {
    return 500; // Más caracteres en la biografía
}
int PremiumLimits::aboutLengthCurrent() const {
    return aboutLengthPremium();
}

int PremiumLimits::maxBoostLevel() const {
    return 999; // Nivel de boost máximo
}

int PremiumLimits::appConfigLimit(const QString &key, int fallback) const {
    return _session->appConfig().get<int>(key, fallback);
}

// 🚀 ELIMINAR RESTRICCIONES DE CANALES Y GRUPOS 🚀
int PremiumLimits::channelsPublicCurrent() const {
    return 9999; // Eliminar límite de canales públicos
}

int PremiumLimits::dialogFiltersCurrent() const {
    return 9999; // Sin límite de carpetas de chats
}

int PremiumLimits::dialogFiltersChatsCurrent() const {
    return 9999; // Sin límite de chats dentro de carpetas
}

int PremiumLimits::dialogFiltersLinksCurrent() const {
    return 9999; // Sin límite de invitaciones a carpetas de chats
}

int PremiumLimits::topicsPinnedCurrent() const {
    return 9999; // Sin límite de temas fijados en supergrupos
}

int PremiumLimits::savedSublistsPinnedCurrent() const {
    return 9999; // Sin límite en listas guardadas
}

int PremiumLimits::captionLengthCurrent() const {
    return 9999; // Sin límite en descripciones de fotos/videos
}

// 🚀 ELIMINAR RESTRICCIONES EN PERFIL 🚀
int PremiumLimits::channelColorLevelMin() const {
    return 1; // Permitir colores en canales desde nivel 1
}

int PremiumLimits::channelBgIconLevelMin() const {
    return 1; // Permitir iconos de fondo en canales desde nivel 1
}

int PremiumLimits::channelProfileBgIconLevelMin() const {
    return 1;
}

int PremiumLimits::channelEmojiStatusLevelMin() const {
    return 1;
}

int PremiumLimits::channelWallpaperLevelMin() const {
    return 1;
}

int PremiumLimits::channelCustomWallpaperLevelMin() const {
    return 1;
}

int PremiumLimits::groupEmojiStatusLevelMin() const {
    return 1;
}

int PremiumLimits::groupWallpaperLevelMin() const {
    return 1;
}

int PremiumLimits::groupCustomWallpaperLevelMin() const {
    return 1;
}

} // namespace Data
