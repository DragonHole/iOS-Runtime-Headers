/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface PKPaymentHeroImageModel : NSObject {

	NSURL* _url;
	NSString* _imageSha;

}

@property (nonatomic,readonly) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * imageSha;              //@synthesize imageSha=_imageSha - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)imageSha;
@end
