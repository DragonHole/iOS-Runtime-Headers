/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet;

@interface _UIObjectReferenceCounter : NSObject {

	NSCountedSet* _objectReferences;

}
-(id)init;
-(id)allObjects;
-(void)incrementReferenceForObject:(id)arg1 ;
-(void)decrementReferenceForObject:(id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
@end

