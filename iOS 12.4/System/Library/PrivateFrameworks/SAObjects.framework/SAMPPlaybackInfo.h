/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, NSString;

@interface SAMPPlaybackInfo : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long durationMillis; 
@property (nonatomic,retain) SACalendar * lastPlayedDate; 
@property (assign,nonatomic) long long playbackPositionMillis; 
@property (assign,nonatomic) long long plays; 
@property (assign,nonatomic) BOOL rememberPlaybackPosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)playbackInfoWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)playbackInfo;
-(id)encodedClassName;
-(long long)durationMillis;
-(void)setDurationMillis:(long long)arg1 ;
-(long long)playbackPositionMillis;
-(void)setPlaybackPositionMillis:(long long)arg1 ;
-(long long)plays;
-(void)setPlays:(long long)arg1 ;
-(BOOL)rememberPlaybackPosition;
-(void)setRememberPlaybackPosition:(BOOL)arg1 ;
-(SACalendar *)lastPlayedDate;
-(void)setLastPlayedDate:(SACalendar *)arg1 ;
-(id)groupIdentifier;
@end

