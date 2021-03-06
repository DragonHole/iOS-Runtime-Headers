/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WLKChannelDetails, NSDictionary, NSArray;

@interface WLKChannel : NSObject {

	NSString* _ID;
	WLKChannelDetails* _details;
	NSDictionary* _punchoutUrls;
	NSArray* _seasonNumbers;
	NSArray* _subscriptionOffers;

}

@property (nonatomic,copy,readonly) NSString * ID;                             //@synthesize ID=_ID - In the implementation block
@property (nonatomic,copy,readonly) WLKChannelDetails * details;               //@synthesize details=_details - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * punchoutUrls;               //@synthesize punchoutUrls=_punchoutUrls - In the implementation block
@property (nonatomic,copy,readonly) NSArray * seasonNumbers;                   //@synthesize seasonNumbers=_seasonNumbers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subscriptionOffers;              //@synthesize subscriptionOffers=_subscriptionOffers - In the implementation block
+(id)channelsWithDictionaries:(id)arg1 context:(id)arg2 ;
-(WLKChannelDetails *)details;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)ID;
-(NSDictionary *)punchoutUrls;
-(NSArray *)seasonNumbers;
-(NSArray *)subscriptionOffers;
-(id)init;
@end

