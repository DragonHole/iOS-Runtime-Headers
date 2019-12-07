/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventFeedRequested : TPSAnalyticsEvent {

	BOOL _tipFeed;
	NSString* _serviceError;
	NSString* _clientError;

}

@property (nonatomic,retain) NSString * serviceError;              //@synthesize serviceError=_serviceError - In the implementation block
@property (nonatomic,retain) NSString * clientError;               //@synthesize clientError=_clientError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)eventName;
-(void)setClientError:(NSString *)arg1 ;
-(NSString *)clientError;
-(id)analyticsEventRepresentation;
-(NSString *)serviceError;
-(void)setServiceError:(NSString *)arg1 ;
-(id)initTipFeedRequestWithServiceError:(id)arg1 clientError:(id)arg2 ;
-(id)initRulesFeedRequestWithServiceError:(id)arg1 clientError:(id)arg2 ;
@end
