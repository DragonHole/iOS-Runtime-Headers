/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCoding;
@class NSData, XPCRequest;

@interface XPCNSRequest : NSObject {

	id<NSCoding> _message;
	NSData* _data;
	XPCRequest* _request;

}

@property (nonatomic,retain,readonly) XPCRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain,readonly) id<NSCoding> message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
-(void)sendReply:(id)arg1 ;
-(id)initWithXPCRequest:(id)arg1 ;
-(id<NSCoding>)message;
-(XPCRequest *)request;
-(NSData *)data;
@end

