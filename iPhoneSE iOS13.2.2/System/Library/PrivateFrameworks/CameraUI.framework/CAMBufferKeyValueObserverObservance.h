/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMBufferObservance.h>

@class NSObject, NSString;

@interface CAMBufferKeyValueObserverObservance : CAMBufferObservance {

	NSObject* _object;
	NSString* _keyPath;

}

@property (nonatomic,__weak,readonly) NSObject * object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;               //@synthesize keyPath=_keyPath - In the implementation block
-(NSObject *)object;
-(NSString *)keyPath;
-(BOOL)shouldBeFulfilledByChange:(id)arg1 ;
-(void)setupObservanceForBuffer:(id)arg1 ;
-(void)teardownObservanceForBuffer:(id)arg1 ;
-(id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withPredicate:(/*^block*/id)arg3 removedOnceEnabled:(BOOL)arg4 ;
@end
