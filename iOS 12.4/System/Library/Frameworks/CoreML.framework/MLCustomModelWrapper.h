/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLModel.h>

@protocol MLCustomModel;
@class NSObject;

@interface MLCustomModelWrapper : MLModel {

	NSObject*<MLCustomModel> _customModel;

}

@property (retain) NSObject*<MLCustomModel> customModel;              //@synthesize customModel=_customModel - In the implementation block
-(id)initWithModelDescription:(id)arg1 customModel:(id)arg2 configuration:(id)arg3 ;
-(NSObject*<MLCustomModel>)customModel;
-(void)setCustomModel:(NSObject*<MLCustomModel>)arg1 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

