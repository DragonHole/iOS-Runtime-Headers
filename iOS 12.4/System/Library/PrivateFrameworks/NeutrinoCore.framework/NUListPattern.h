/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUListPattern : NUPattern {

	NSArray* _list;

}

@property (readonly) NSArray * list;              //@synthesize list=_list - In the implementation block
-(id)initWithList:(id)arg1 ;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(id)shortestMatch;
-(BOOL)isFixedOrder;
-(BOOL)isEqualToListPattern:(id)arg1 ;
-(id)init;
-(id)tokens;
-(id)stringRepresentation;
-(NSArray *)list;
@end
