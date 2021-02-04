/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface NUComponents : NSObject {

	NSMutableArray* _mutableComponents;

}

@property (nonatomic,readonly) NSMutableArray * mutableComponents;              //@synthesize mutableComponents=_mutableComponents - In the implementation block
@property (nonatomic,readonly) NSArray * components; 
@property (nonatomic,readonly) NSArray * reversedComponents; 
-(void)addComponent:(id)arg1 ;
-(NSMutableArray *)mutableComponents;
-(NSArray *)reversedComponents;
-(id)init;
-(id)description;
-(NSArray *)components;
@end
