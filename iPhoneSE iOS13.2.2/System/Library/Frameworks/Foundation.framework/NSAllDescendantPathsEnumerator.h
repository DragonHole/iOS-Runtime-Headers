/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSDirectoryEnumerator.h>

@class NSString, NSArray, NSFileAttributes;

@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {

	NSString* path;
	NSArray* contents;
	unsigned long long idx;
	NSString* prepend;
	NSAllDescendantPathsEnumerator* under;
	NSFileAttributes* directoryAttributes;
	NSString* pathToLastReportedItem;
	unsigned long long depth;
	BOOL cross;
	char _padding[3];

}
+(id)newWithPath:(id)arg1 prepend:(id)arg2 attributes:(id)arg3 cross:(BOOL)arg4 depth:(unsigned long long)arg5 ;
-(void)dealloc;
-(id)nextObject;
-(id)fileAttributes;
-(id)directoryAttributes;
-(unsigned long long)level;
-(void)skipDescendents;
-(void)skipDescendants;
-(BOOL)isEnumeratingDirectoryPostOrder;
-(id)_under;
-(id)currentSubdirectoryAttributes;
@end
