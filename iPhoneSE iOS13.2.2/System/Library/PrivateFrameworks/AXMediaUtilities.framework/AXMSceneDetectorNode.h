/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNSceneClassificationRequest;

@interface AXMSceneDetectorNode : AXMEvaluationNode {

	unsigned _taxonomyOptions;
	VNSceneClassificationRequest* __sceneClassificationRequest;

}

@property (setter=_setSceneClassificationRequest:,nonatomic,retain) VNSceneClassificationRequest * _sceneClassificationRequest;              //@synthesize _sceneClassificationRequest=__sceneClassificationRequest - In the implementation block
@property (assign,nonatomic) unsigned taxonomyOptions;                                                                                       //@synthesize taxonomyOptions=_taxonomyOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
+(id)possibleSceneClassifications;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 ;
-(void)setTaxonomyOptions:(unsigned)arg1 ;
-(VNSceneClassificationRequest *)_sceneClassificationRequest;
-(void)_setSceneClassificationRequest:(id)arg1 ;
-(unsigned)taxonomyOptions;
@end

