/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <SpotlightUI/SPUIMutableLegibilitySceneSettings.h>
#import <libobjc.A.dylib/SPUISearchViewSceneSettings.h>

@class NSString;

@interface SPUIMutableSearchViewSceneSettings : SPUIMutableLegibilitySceneSettings <SPUISearchViewSceneSettings>

@property (assign,nonatomic) double revealProgress; 
@property (assign,nonatomic) unsigned long long presentationSource; 
@property (assign,nonatomic) unsigned long long presentationIntent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(void)setPresentationSource:(unsigned long long)arg1 ;
-(unsigned long long)presentationSource;
-(double)revealProgress;
-(void)setRevealProgress:(double)arg1 ;
-(unsigned long long)presentationIntent;
-(void)setPresentationIntent:(unsigned long long)arg1 ;
@end
