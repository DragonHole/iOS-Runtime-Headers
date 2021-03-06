/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MKKVOProxyDelegate;
@interface _MKKVOProxy : NSObject {

	id<_MKKVOProxyDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_MKKVOProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addObserverForObject:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserverForObject:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setDelegate:(id<_MKKVOProxyDelegate>)arg1 ;
-(id<_MKKVOProxyDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
@end

