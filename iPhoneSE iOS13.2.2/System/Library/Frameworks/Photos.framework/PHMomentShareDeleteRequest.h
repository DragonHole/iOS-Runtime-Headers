/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObjectDeleteRequest.h>

@interface PHMomentShareDeleteRequest : PHObjectDeleteRequest {

	long long _operation;

}

@property (assign,nonatomic) long long operation;              //@synthesize operation=_operation - In the implementation block
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2 ;
@end

