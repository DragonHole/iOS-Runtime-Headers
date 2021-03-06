/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, _MXExtensionProvider;

@interface _MXExtensionDispatchCenter : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSHashTable* _handlers;
	_MXExtensionProvider* _extensionProvider;

}

@property (nonatomic,__weak,readonly) _MXExtensionProvider * extensionProvider;              //@synthesize extensionProvider=_extensionProvider - In the implementation block
-(id)initWithExtensionProvider:(id)arg1 ;
-(void)dispatchExtensions:(id)arg1 error:(id)arg2 ;
-(id)addExtensionsUpdateHandler:(/*^block*/id)arg1 ;
-(void)removeExtensionUpdateHandler:(id)arg1 ;
-(_MXExtensionProvider *)extensionProvider;
@end

