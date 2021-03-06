/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUSourceDefinition.h>

@class NSArray;

@interface NUMultipleSourceDefinition : NUSourceDefinition {

	NSArray* _sourceDefinitions;

}

@property (readonly) NSArray * sourceDefinitions;              //@synthesize sourceDefinitions=_sourceDefinitions - In the implementation block
-(id)init;
-(id)description;
-(long long)mediaType;
-(id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithSourceDefinitions:(id)arg1 ;
-(NSArray *)sourceDefinitions;
@end

