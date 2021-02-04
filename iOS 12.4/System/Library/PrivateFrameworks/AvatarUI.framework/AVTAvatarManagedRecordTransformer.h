/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTAvatarManagedRecordTransformer.h>

@protocol AVTAvatarManagedRecordTransformer
@required
-(id)identifierForManagedRecordIdentifier:(id)arg1;
-(id)recordWithManagedRecord:(id)arg1 error:(id*)arg2;
-(id)managedRecordIdentifierForIdentifier:(id)arg1;
-(void)updateManagedRecord:(id)arg1 withRecord:(id)arg2;

@end


@interface AVTAvatarManagedRecordTransformer : NSObject <AVTAvatarManagedRecordTransformer>
-(id)identifierForManagedRecordIdentifier:(id)arg1 ;
-(id)recordWithManagedRecord:(id)arg1 error:(id*)arg2 ;
-(id)managedRecordIdentifierForIdentifier:(id)arg1 ;
-(void)updateManagedRecord:(id)arg1 withRecord:(id)arg2 ;
@end
