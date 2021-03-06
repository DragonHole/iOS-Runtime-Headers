/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VNPersonsModelFaceModelDataProvider <NSObject>
@required
-(unsigned long long)faceModelPersonsCount;
-(unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
-(id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;
-(id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;
-(unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1;

@end

