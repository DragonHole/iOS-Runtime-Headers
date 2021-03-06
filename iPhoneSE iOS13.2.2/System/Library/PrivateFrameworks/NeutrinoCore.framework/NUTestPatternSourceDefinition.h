/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSingleSourceDefinition.h>

@interface NUTestPatternSourceDefinition : NUSingleSourceDefinition {

	long long _orientation;
	SCD_Struct_NU7 _size;

}

@property (readonly) SCD_Struct_NU7 size;                //@synthesize size=_size - In the implementation block
@property (readonly) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
-(id)init;
-(SCD_Struct_NU7)size;
-(long long)orientation;
-(long long)mediaType;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithSize:(SCD_Struct_NU7)arg1 orientation:(long long)arg2 ;
@end

