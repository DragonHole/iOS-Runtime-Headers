/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXLayoutBlueprintProvider.h>
@class SXLayoutBlueprint;


@protocol SXLayoutBlueprintProvider <NSObject>
@property (nonatomic,readonly) SXLayoutBlueprint * blueprint; 
@required
-(SXLayoutBlueprint *)blueprint;

@end


@class SXLayoutBlueprint, NSString;

@interface SXLayoutBlueprintProvider : NSObject <SXLayoutBlueprintProvider> {

	SXLayoutBlueprint* blueprint;

}

@property (nonatomic,retain) SXLayoutBlueprint * blueprint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateBlueprint:(id)arg1 ;
-(SXLayoutBlueprint *)blueprint;
-(void)setBlueprint:(SXLayoutBlueprint *)arg1 ;
@end
