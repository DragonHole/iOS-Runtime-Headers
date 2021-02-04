/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICMediaApplicationBanner.h>

@class NSString, NSDictionary, NSDate;

@interface ICMutableMediaApplicationBanner : ICMediaApplicationBanner

@property (nonatomic,copy) NSString * guid; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSString * target; 
@property (nonatomic,copy) NSDictionary * rawPayload; 
@property (nonatomic,copy) NSDate * displayWindowStartTime; 
@property (nonatomic,copy) NSDate * displayWindowEndTime; 
@property (assign,nonatomic) int maxDisplayCount; 
@property (assign,nonatomic) int displayCount; 
@property (nonatomic,copy) NSString * setID; 
@property (assign,nonatomic) BOOL hasBeenTapped; 
-(void)setGuid:(NSString *)arg1 ;
-(void)setDisplayWindowStartTime:(NSDate *)arg1 ;
-(void)setDisplayWindowEndTime:(NSDate *)arg1 ;
-(void)setMaxDisplayCount:(int)arg1 ;
-(void)setDisplayCount:(int)arg1 ;
-(void)setRawPayload:(NSDictionary *)arg1 ;
-(void)setSetID:(NSString *)arg1 ;
-(void)setHasBeenTapped:(BOOL)arg1 ;
-(void)setTarget:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end
