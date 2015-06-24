/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBLegibilitySettings : XXUnknownSuperclass {
	float _slideToUnlockDarkShadowStrength;
	float _slideToUnlockLightShadowStrength;
	float _cameraGrabberDarkShadowStrength;
	float _cameraGrabberLightShadowStrength;
	float _timeDarkShadowStrength;
	float _timeLightShadowStrength;
	float _dateDarkShadowStrength;
	float _dateLightShadowStrength;
	float _statusTextDarkShadowStrength;
	float _statusTextLightShadowStrength;
	float _iconLabelDarkShadowStrength;
	float _iconLabelLightShadowStrength;
	float _folderTitleDarkShadowStrength;
	float _folderTitleLightShadowStrength;
	float _timerTextDarkShadowStrength;
	float _timerTextLightShadowStrength;
	float _timerDialDarkShadowStrength;
	float _timerDialLightShadowStrength;
}
@property(assign) float timerDialLightShadowStrength;
@property(assign) float timerDialDarkShadowStrength;
@property(assign) float timerTextLightShadowStrength;
@property(assign) float timerTextDarkShadowStrength;
@property(assign) float folderTitleLightShadowStrength;
@property(assign) float folderTitleDarkShadowStrength;
@property(assign) float iconLabelLightShadowStrength;
@property(assign) float iconLabelDarkShadowStrength;
@property(assign) float statusTextLightShadowStrength;
@property(assign) float statusTextDarkShadowStrength;
@property(assign) float dateLightShadowStrength;
@property(assign) float dateDarkShadowStrength;
@property(assign) float timeLightShadowStrength;
@property(assign) float timeDarkShadowStrength;
@property(assign) float cameraGrabberLightShadowStrength;
@property(assign) float cameraGrabberDarkShadowStrength;
@property(assign) float slideToUnlockLightShadowStrength;
@property(assign) float slideToUnlockDarkShadowStrength;
+(id)settingsControllerModule;
-(float)timerDialStrengthForStyle:(int)style;
-(float)timerTextStrengthForStyle:(int)style;
-(float)folderTitleStrengthForStyle:(int)style;
-(float)iconLabelStrengthForStyle:(int)style;
-(float)statusTextStrengthForStyle:(int)style;
-(float)dateStrengthForStyle:(int)style;
-(float)timeStrengthForStyle:(int)style;
-(float)cameraGrabberStrengthForStyle:(int)style;
-(float)slideToUnlockStrengthForStyle:(int)style;
-(void)setDefaultValues;
@end

