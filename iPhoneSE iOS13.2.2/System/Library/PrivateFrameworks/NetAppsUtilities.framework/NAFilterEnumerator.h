/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator;

@interface NAFilterEnumerator : NSEnumerator {

	NSEnumerator* _enumerator;
	/*^block*/id _filter;

}

@property (nonatomic,readonly) NSEnumerator * enumerator;              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,copy,readonly) id filter;                         //@synthesize filter=_filter - In the implementation block
-(id)nextObject;
-(id)allObjects;
-(NSEnumerator *)enumerator;
-(id)filter;
-(id)initWithEnumerator:(id)arg1 filter:(/*^block*/id)arg2 ;
@end

