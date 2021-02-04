/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWNodeEnumerator.h>

@class NSMutableArray;

@interface BWReverseDepthFirstEnumerator : BWNodeEnumerator {

	int _ordering;
	NSMutableArray* _stack;
	unsigned long long _currentSinkIndex;

}
-(id)initWithGraph:(id)arg1 vertexOrdering:(int)arg2 ;
-(id)_nextUnvisitedParent:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
@end
