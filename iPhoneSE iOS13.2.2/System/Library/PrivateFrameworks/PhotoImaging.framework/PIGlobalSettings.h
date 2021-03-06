/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PIGlobalSettings : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _settings;

}
+(id)globalSettings;
-(id)init;
-(id)decoratorRenderFiltersForImages;
-(id)decoratorRenderFiltersForVideos;
@end

