/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, NSOrderedSet;

@interface FBOcclusionsStackEntry : NSObject {

	NSString* _key;
	double _level;
	NSSet* _occlusions;
	NSOrderedSet* _orderedOcclusions;

}

@property (nonatomic,copy,readonly) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double level;                                         //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSSet * occlusions; 
@property (nonatomic,copy,readonly) NSOrderedSet * orderedOcclusions;              //@synthesize orderedOcclusions=_orderedOcclusions - In the implementation block
-(NSSet *)occlusions;
-(void)setOcclusions:(NSSet *)arg1 ;
-(NSOrderedSet *)orderedOcclusions;
-(id)initWithKey:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)description;
-(NSString *)key;
-(void)setLevel:(double)arg1 ;
-(double)level;
@end

