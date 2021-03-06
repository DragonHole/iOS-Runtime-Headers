/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet;

@interface CAMStillImageCaptureCoordinationInfo : NSObject {

	NSString* _identifier;
	NSSet* _allExpectedResultSpecifiers;
	unsigned long long _resultSpecifiers;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSSet * allExpectedResultSpecifiers;                                                      //@synthesize allExpectedResultSpecifiers=_allExpectedResultSpecifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long resultSpecifiers;                                                      //@synthesize resultSpecifiers=_resultSpecifiers - In the implementation block
@property (getter=isHDR,nonatomic,readonly) BOOL HDR; 
@property (getter=isFiltered,nonatomic,readonly) BOOL filtered; 
@property (getter=isUnfilteredImageForFilteredPair,nonatomic,readonly) BOOL unfilteredImageForFilteredPair; 
@property (getter=isFilteredImageForFilteredPair,nonatomic,readonly) BOOL filteredImageForFilteredPair; 
@property (getter=isEV0ForHDREV0Pair,nonatomic,readonly) BOOL EV0ForHDREV0Pair; 
@property (getter=isHDRForHDREV0Pair,nonatomic,readonly) BOOL HDRForHDREV0Pair; 
@property (getter=isFinalExpectedResult,nonatomic,readonly) BOOL finalExpectedResult; 
-(BOOL)isHDR;
-(BOOL)isFiltered;
-(unsigned long long)resultSpecifiers;
-(NSSet *)allExpectedResultSpecifiers;
-(BOOL)isEV0ForHDREV0Pair;
-(BOOL)isUnfilteredImageForFilteredPair;
-(id)initWithIdentifier:(id)arg1 allExpectedResultSpecifiers:(id)arg2 resultSpecifiers:(unsigned long long)arg3 ;
-(BOOL)isFilteredImageForFilteredPair;
-(BOOL)isHDRForHDREV0Pair;
-(BOOL)isFinalExpectedResult;
-(NSString *)identifier;
-(id)description;
@end

