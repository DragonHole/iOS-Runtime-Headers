/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface SFSessionRequestInfo : NSObject {

	NSString* _requestID;
	NSDictionary* _options;
	NSDictionary* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSString * requestID;                //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSDictionary * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                  //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setRequest:(NSDictionary *)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(NSString *)requestID;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)request;
@end

