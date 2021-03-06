/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSString;

@interface MPFeedbackCommand : MPRemoteCommand {

	long long _presentationStyle;
	BOOL _active;
	NSString* _localizedTitle;
	NSString* _localizedShortTitle;

}

@property (assign,getter=isActive,nonatomic) BOOL active;               //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                   //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedShortTitle;              //@synthesize localizedShortTitle=_localizedShortTitle - In the implementation block
-(id)_mediaRemoteCommandInfoOptions;
-(void)setLocalizedShortTitle:(NSString *)arg1 ;
-(id)newCommandEventWithState:(long long)arg1 ;
-(NSString *)localizedShortTitle;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)setPresentationStyle:(long long)arg1 ;
-(long long)presentationStyle;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
@end

