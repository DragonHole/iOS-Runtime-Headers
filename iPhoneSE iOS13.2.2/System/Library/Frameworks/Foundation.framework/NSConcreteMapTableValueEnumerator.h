/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSConcreteMapTable;

@interface NSConcreteMapTableValueEnumerator : NSEnumerator {

	NSConcreteMapTable* mapTable;
	unsigned long long counter;

}
+(id)enumeratorWithMapTable:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
@end

