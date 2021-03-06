/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoViewControllerSizeObserving.h>

@class SVVideoViewController, SVKeyValueObserver, NSString;

@interface SVVideoViewControllerSizeObserver : NSObject <SVVideoViewControllerSizeObserving> {

	/*^block*/id changeBlock;
	SVVideoViewController* _videoViewController;
	SVKeyValueObserver* _boundsObserver;
	CGSize _size;

}

@property (nonatomic,__weak,readonly) SVVideoViewController * videoViewController;              //@synthesize videoViewController=_videoViewController - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * boundsObserver;                             //@synthesize boundsObserver=_boundsObserver - In the implementation block
@property (assign,nonatomic) CGSize size;                                                       //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
-(SVVideoViewController *)videoViewController;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1 ;
-(id)initWithVideoViewController:(id)arg1 ;
-(SVKeyValueObserver *)boundsObserver;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
@end

