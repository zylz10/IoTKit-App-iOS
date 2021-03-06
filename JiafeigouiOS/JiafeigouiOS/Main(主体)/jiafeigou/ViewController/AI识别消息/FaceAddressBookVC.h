//
//  FaceAddressBookVC.h
//  JiafeigouiOS
//
//  Created by 杨利 on 2017/10/18.
//  Copyright © 2017年 lirenguang. All rights reserved.
//

#import "JFGBaseViewController.h"

typedef NS_ENUM(NSInteger,FaceAddressBookVCType) {
    
    FaceAddressBookVCTypeRecognition,//识别
    FaceAddressBookVCTypeMoveTo,//移动到
    
};


@protocol FaceAddressBookVCDelegate <NSObject>


-(void)faceAddressSelectedPersonForIndex:(NSIndexPath *)indexPath;

@end

@interface FaceAddressBookVC : JFGBaseViewController

@property (nonatomic,copy)NSString *cid;
@property (nonatomic,copy)NSString *face_id;
@property (nonatomic,copy)NSString *person_id;//如果有，则传入
@property (nonatomic,copy)NSString *imageUrl;//头像url
@property (nonatomic,assign)int flag;//头像文件存储区域
@property (nonatomic,strong)NSIndexPath *selectedIndexPath;
@property (nonatomic,weak)id <FaceAddressBookVCDelegate> delegate;
@property (nonatomic,assign)FaceAddressBookVCType vcType;

@end

