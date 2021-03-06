/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BCSCloudServerRouteProvider, BCSCloudServerBodyProvider;
@interface BCSCloudServerRequestHelper : NSObject {

	id<BCSCloudServerRouteProvider> _cloudServerRouteProvider;
	id<BCSCloudServerBodyProvider> _cloudServerBodyProvider;

}

@property (nonatomic,retain) id<BCSCloudServerRouteProvider> cloudServerRouteProvider;              //@synthesize cloudServerRouteProvider=_cloudServerRouteProvider - In the implementation block
@property (nonatomic,retain) id<BCSCloudServerBodyProvider> cloudServerBodyProvider;                //@synthesize cloudServerBodyProvider=_cloudServerBodyProvider - In the implementation block
-(id)configItemRequestWithTimeout:(double)arg1 ;
-(id)bloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2 timeout:(double)arg3 ;
-(id)businessItemRequestWithBizID:(id)arg1 timeout:(double)arg2 ;
-(id)businessItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 timeout:(double)arg3 ;
-(id)initWithRouteProvider:(unsigned long long)arg1 bodyProvider:(unsigned long long)arg2 ;
-(id)baseBusinessItemJSONPostRequestWithTimeout:(double)arg1 cloudServerRequestType:(long long)arg2 ;
-(id<BCSCloudServerBodyProvider>)cloudServerBodyProvider;
-(void)addEdgeCachingToRequest:(id)arg1 requestType:(id)arg2 requestIdentifier:(id)arg3 ;
-(id<BCSCloudServerRouteProvider>)cloudServerRouteProvider;
-(void)setCloudServerRouteProvider:(id<BCSCloudServerRouteProvider>)arg1 ;
-(void)setCloudServerBodyProvider:(id<BCSCloudServerBodyProvider>)arg1 ;
@end

