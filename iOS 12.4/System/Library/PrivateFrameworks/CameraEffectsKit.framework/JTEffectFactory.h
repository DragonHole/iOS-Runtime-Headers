/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface JTEffectFactory : NSObject
+(id)sharedInstance;
-(id)effectsForType:(int)arg1 ;
-(id)overlayEffect:(id)arg1 properties:(id)arg2 ;
-(id)animojis;
-(BOOL)isStyleTransferEffectID:(id)arg1 ;
-(id)_effectCategories:(int)arg1 ;
-(id)_effects:(int)arg1 category:(id)arg2 ;
-(id)_effects:(int)arg1 ;
-(id)_effectsIDsForType:(int)arg1 ;
-(id)_filterEffects;
-(id)_animojiEffects;
-(id)_liveTitleEffects;
-(id)_overlayEffects;
-(id)_titleCardEffects;
-(BOOL)CFX_isExpensiveEffectID:(id)arg1 ;
-(id)overlayCategories;
-(id)titleCardCategories;
-(id)propertiesForEffectID:(id)arg1 ;
-(id)overlays:(id)arg1 ;
-(id)styleTransferEffectIDs;
-(id)effectIDsForType:(int)arg1 ;
-(id)createEffectForType:(id)arg1 forType:(int)arg2 ;
-(id)animojiEffect:(id)arg1 properties:(id)arg2 ;
-(id)filterEffect:(id)arg1 properties:(id)arg2 ;
-(id)init;
-(id)filters;
-(id)overlays;
@end

