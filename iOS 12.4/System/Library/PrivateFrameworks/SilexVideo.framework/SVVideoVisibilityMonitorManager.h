/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoVisibilityMonitorProviding.h>

@protocol SVVisibilityMonitorFactory;
@class SVWeakObjectCache, NSString;

@interface SVVideoVisibilityMonitorManager : NSObject <SVVideoVisibilityMonitorProviding> {

	id<SVVisibilityMonitorFactory> _videoVisibilityMonitorFactory;
	SVWeakObjectCache* _visibilityMonitors;

}

@property (nonatomic,readonly) id<SVVisibilityMonitorFactory> videoVisibilityMonitorFactory;              //@synthesize videoVisibilityMonitorFactory=_videoVisibilityMonitorFactory - In the implementation block
@property (nonatomic,readonly) SVWeakObjectCache * visibilityMonitors;                                    //@synthesize visibilityMonitors=_visibilityMonitors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SVWeakObjectCache *)visibilityMonitors;
-(id)visibilityMonitorForVideo:(id)arg1 ;
-(id)initWithVideoVisibilityMonitorFactory:(id)arg1 ;
-(id<SVVisibilityMonitorFactory>)videoVisibilityMonitorFactory;
@end

