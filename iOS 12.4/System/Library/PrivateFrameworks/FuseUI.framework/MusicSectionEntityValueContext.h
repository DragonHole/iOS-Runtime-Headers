/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityValueContext.h>

@class NSString;

@interface MusicSectionEntityValueContext : MusicEntityValueContext {

	BOOL _wantsLocalizedTitle;
	NSString* _localizedTitle;

}

@property (assign,nonatomic) BOOL wantsLocalizedTitle;              //@synthesize wantsLocalizedTitle=_wantsLocalizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;               //@synthesize localizedTitle=_localizedTitle - In the implementation block
-(void)resetOutputValues;
-(BOOL)wantsLocalizedTitle;
-(void)setWantsLocalizedTitle:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
@end
