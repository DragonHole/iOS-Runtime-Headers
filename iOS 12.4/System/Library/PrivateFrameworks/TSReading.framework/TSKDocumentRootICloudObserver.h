/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface TSKDocumentRootICloudObserver : NSObject {

	long long _identifier;
	NSOperationQueue* _operationQueue;
	/*^block*/id _block;
	long long _identifer;

}

@property (nonatomic,readonly) long long identifer;              //@synthesize identifer=_identifer - In the implementation block
-(void)invokeWithDocumentRoot:(id)arg1 ;
-(long long)identifer;
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

