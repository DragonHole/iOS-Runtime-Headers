/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSArray, NSString;

@interface NUPattern : NSObject {

	BOOL _isFixedOrder;

}

@property (nonatomic,readonly) NSSet * tokens; 
@property (nonatomic,readonly) BOOL isFixedOrder;                            //@synthesize isFixedOrder=_isFixedOrder - In the implementation block
@property (nonatomic,readonly) NSArray * shortestMatch; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) NSString * stringRepresentation; 
+(BOOL)scanString:(id)arg1 intoPattern:(out id*)arg2 error:(out id*)arg3 ;
+(id)patternWithString:(id)arg1 error:(out id*)arg2 ;
-(id)optimizedPattern;
-(BOOL)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3 ;
-(BOOL)isEqualToPattern:(id)arg1 ;
-(BOOL)isDetermisitic;
-(NSArray *)shortestMatch;
-(BOOL)isFixedOrder;
-(BOOL)match:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEmpty;
-(NSSet *)tokens;
-(NSString *)stringRepresentation;
@end

