/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface TMLJSScope : NSObject {

	int _type;
	NSMutableSet* _vars;

}

@property (assign,nonatomic) int type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableSet * vars;              //@synthesize vars=_vars - In the implementation block
-(void)addVar:(id)arg1 ;
-(NSMutableSet *)vars;
-(void)setVars:(NSMutableSet *)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
@end

