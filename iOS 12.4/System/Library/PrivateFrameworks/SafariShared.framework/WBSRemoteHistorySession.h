/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray;

@interface WBSRemoteHistorySession : NSObject <NSSecureCoding> {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _items;

}

@property (nonatomic,readonly) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                           //@synthesize items=_items - In the implementation block
@property (getter=isCurrentSession,readonly) BOOL currentSession; 
+(BOOL)supportsSecureCoding;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 items:(id)arg3 ;
-(BOOL)isCurrentSession;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)items;
@end

