/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface NUAdContextDefinition : NSObject <NSCopying> {

	NSMutableDictionary* _nestedContextDefinitions;
	NSMutableSet* _mutablePropertyDefinitions;

}

@property (nonatomic,readonly) NSMutableDictionary * nestedContextDefinitions;              //@synthesize nestedContextDefinitions=_nestedContextDefinitions - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mutablePropertyDefinitions;                   //@synthesize mutablePropertyDefinitions=_mutablePropertyDefinitions - In the implementation block
@property (nonatomic,readonly) NSSet * propertyDefinitions; 
+(id)definition;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addPropertyDefinition:(id)arg1 ;
-(NSMutableSet *)mutablePropertyDefinitions;
-(NSSet *)propertyDefinitions;
-(BOOL)isPropertyDefinitionValid:(id)arg1 ;
-(NSMutableDictionary *)nestedContextDefinitions;
@end
