/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString;


@protocol CalDAVSubscribedCalendar <CalDAVCalendar>
@property (nonatomic,retain) NSURL * subscriptionURL; 
@property (assign,nonatomic) BOOL hasAlarmFilter; 
@property (assign,nonatomic) BOOL hasAttachmentFilter; 
@property (assign,nonatomic) BOOL hasTaskFilter; 
@property (assign,nonatomic) double refreshInterval; 
@property (assign,nonatomic) BOOL autoprovisioned; 
@property (nonatomic,retain) NSString * locationCode; 
@property (nonatomic,retain) NSString * languageCode; 
@optional
-(NSString *)locationCode;
-(BOOL)autoprovisioned;
-(void)setLocationCode:(id)arg1;
-(void)setAutoprovisioned:(BOOL)arg1;
-(NSString *)languageCode;
-(void)setLanguageCode:(id)arg1;

@required
-(NSURL *)subscriptionURL;
-(void)setSubscriptionURL:(id)arg1;
-(BOOL)hasAlarmFilter;
-(void)setHasAlarmFilter:(BOOL)arg1;
-(BOOL)hasAttachmentFilter;
-(void)setHasAttachmentFilter:(BOOL)arg1;
-(BOOL)hasTaskFilter;
-(void)setHasTaskFilter:(BOOL)arg1;
-(void)setRefreshInterval:(double)arg1;
-(double)refreshInterval;

@end
