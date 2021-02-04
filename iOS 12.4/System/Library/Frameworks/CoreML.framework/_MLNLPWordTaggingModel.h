/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription;

@interface _MLNLPWordTaggingModel : NSObject <MLCustomModel> {

	void* _wordTaggingModel;
	MLModelDescription* _modelDescription;

}

@property (retain) MLModelDescription * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(MLModelDescription *)modelDescription;
-(void)setModelDescription:(MLModelDescription *)arg1 ;
@end
