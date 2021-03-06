/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUPattern.h>

@class NUPattern;

@interface NURepeatPattern : NUPattern {

	NUPattern* _pattern;
	long long _minCount;
	long long _maxCount;

}

@property (readonly) NUPattern * pattern;              //@synthesize pattern=_pattern - In the implementation block
@property (readonly) long long minCount;               //@synthesize minCount=_minCount - In the implementation block
@property (readonly) long long maxCount;               //@synthesize maxCount=_maxCount - In the implementation block
-(long long)minCount;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(id)shortestMatch;
-(BOOL)isFixedOrder;
-(id)initWithPattern:(id)arg1 minCount:(long long)arg2 maxCount:(long long)arg3 ;
-(BOOL)isEqualToRepeatPattern:(id)arg1 ;
-(id)initWithPattern:(id)arg1 count:(long long)arg2 ;
-(id)initWithPattern:(id)arg1 minCount:(long long)arg2 ;
-(long long)maxCount;
-(id)init;
-(NUPattern *)pattern;
-(id)tokens;
-(id)stringRepresentation;
@end

