/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDModelObjectRenditionSpec.h>

@class NSOrderedSet, MDLMesh;

@interface TDModelMeshRenditionSpec : TDModelObjectRenditionSpec

@property (nonatomic,retain) NSOrderedSet * submeshes; 
@property (nonatomic,retain) MDLMesh * mesh; 
+(id)fetchRequest;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
@end
