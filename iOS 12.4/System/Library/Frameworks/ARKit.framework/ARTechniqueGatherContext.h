/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARResultDataContext.h>

@class NSArray, NSString;

@interface ARTechniqueGatherContext : NSObject <ARResultDataContext> {

	id _parentContext;

}

@property (nonatomic,readonly) id parentContext;                    //@synthesize parentContext=_parentContext - In the implementation block
@property (nonatomic,readonly) NSArray * gatheredData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageData;
-(long long)cameraPosition;
-(id)resultDataOfClass:(Class)arg1 ;
-(id)anchorsToAdd;
-(id)anchorsToRemove;
-(NSArray *)gatheredData;
-(id)captureGatheredData;
-(id)initWithParentContext:(id)arg1 ;
-(id)parentContext;
@end

