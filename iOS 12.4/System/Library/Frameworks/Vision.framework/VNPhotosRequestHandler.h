/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VNRequestWarming.h>
#import <libobjc.A.dylib/VNRequestCancelling.h>

@class VNRequestPerformer, NSObject;

@interface VNPhotosRequestHandler : NSObject <VNRequestWarming, VNRequestCancelling> {

	VNRequestPerformer* _requestPerformer;
	/*^block*/id _burstAnalysisLoggingCallback;
	NSObject* _modelContextObject;

}

@property (nonatomic,retain) NSObject * modelContextObject;              //@synthesize modelContextObject=_modelContextObject - In the implementation block
@property (nonatomic,copy) id burstAnalysisLoggingCallback;              //@synthesize burstAnalysisLoggingCallback=_burstAnalysisLoggingCallback - In the implementation block
-(BOOL)performRequests:(id)arg1 error:(id*)arg2 ;
-(BOOL)prepareForPerformingRequests:(id)arg1 error:(id*)arg2 ;
-(NSObject *)modelContextObject;
-(id)burstAnalysisLoggingCallback;
-(void)setModelContextObject:(NSObject *)arg1 ;
-(BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2 ;
-(void)setBurstAnalysisLoggingCallback:(id)arg1 ;
-(void)cancelAllRequests;
-(id)init;
@end
