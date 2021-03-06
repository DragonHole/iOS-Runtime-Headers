/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSHTTPURLResponse;

@interface SKUIURLResolverResponse : NSObject {

	NSData* _data;
	NSHTTPURLResponse* _response;

}

@property (nonatomic,readonly) NSData * data;                                //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * URLResponse;              //@synthesize response=_response - In the implementation block
-(id)initWithData:(id)arg1 URLResponse:(id)arg2 ;
-(NSHTTPURLResponse *)URLResponse;
-(NSData *)data;
@end

