/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString, NSDate;


@protocol _SSURLCompletionMatch <NSObject>
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * userVisibleURLString; 
@property (nonatomic,readonly) long long matchLocation; 
@property (getter=isTopHit,nonatomic,readonly) BOOL topHit; 
@property (getter=isSynthesizedTopHit,nonatomic,readonly) BOOL synthesizedTopHit; 
@property (getter=isTopHitDueToTriggerMatch,nonatomic,readonly) BOOL topHitDueToTriggerMatch; 
@property (nonatomic,readonly) long long visitCount; 
@property (nonatomic,readonly) NSDate * lastVisitTime; 
@required
-(NSString *)userVisibleURLString;
-(NSDate *)lastVisitTime;
-(BOOL)isTopHit;
-(long long)matchLocation;
-(BOOL)isSynthesizedTopHit;
-(BOOL)isTopHitDueToTriggerMatch;
-(long long)visitCount;
-(NSString *)title;
-(NSURL *)url;

@end

