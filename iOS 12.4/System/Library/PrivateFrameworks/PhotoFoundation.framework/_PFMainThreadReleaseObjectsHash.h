/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFWeakContainer.h>

@interface _PFMainThreadReleaseObjectsHash : PFWeakContainer {

	id _objects[7];
	Class _objectsClasses[7];
	unsigned long long _releaseCounts[7];
	unsigned long long _objectCount;
	unsigned long long _lowIndex;
	unsigned long long _highIndex;

}
+(void)addDeferredReleaseObject:(id)arg1 ;
-(BOOL)isFull;
-(void)weakReferenceBecameNil;
-(void)addDeferredReleaseObject:(id)arg1 ;
-(void)processMainThreadReleases;
@end
