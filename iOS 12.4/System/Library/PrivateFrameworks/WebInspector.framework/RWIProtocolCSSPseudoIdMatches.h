/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray;

@interface RWIProtocolCSSPseudoIdMatches : RWIProtocolJSONObject

@property (assign,nonatomic) int pseudoId; 
@property (nonatomic,copy) NSArray * matches; 
-(void)setMatches:(NSArray *)arg1 ;
-(void)setPseudoId:(int)arg1 ;
-(id)initWithPseudoId:(int)arg1 matches:(id)arg2 ;
-(int)pseudoId;
-(NSArray *)matches;
@end

