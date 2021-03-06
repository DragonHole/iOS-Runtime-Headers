/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaClusterPredicate.h>

@class NSString;

@interface OKMediaSearchClusterPredicate : OKMediaClusterPredicate {

	NSString* _searchString;
	unsigned long long _type;
	unsigned long long _options;

}
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(id)initWithString:(id)arg1 type:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)title;
@end

